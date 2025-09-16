<h1 style="text-align:center;"> Create static website</p>

### Steps to create static website using Hugo in Nix

1. Download hugo and nodejs

   ```
   nix-shell -p hugo nodejs_20
   ```

2. Create a github project named as `blog`

3. Clone created `blog` project

   **Example**

   ```
   git clone git@github.com:vunnyso/blog.git
   ```

4. Find theme of your choice from https://themes.gohugo.io/

5. Create website using `hugo`

   ```
   hugo new site <you-site-name>
   ```

6. Download theme submodule

   **Example**

   ```
   git submodule add https://github.com/wlh320/hugo-theme-hulga.git themes/hulga
   ```

7. Download website submodule

   **Example**

   ```
   git submodule add  https://github.com/vunnyso/vunnyso.github.io.git public -f
   ```

8. Copy config and content

   ```
   cp ./themes/hulga/postcss.config.js ./themes/hulga/package.json .
   cp -r themes/hulga/exampleSite/content/* content/
   ```

9. Add search capability
   ```
   npx pagefind --site public
   hugo server  --theme hulga
   ```
