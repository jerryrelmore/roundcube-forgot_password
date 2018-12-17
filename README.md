 -----------------------------------------------------------------------

#### Forgot Password Plugin for Roundcube

 -----------------------------------------------------------------------

 Plugin that adds functionality so that a user can request a link to 
 generate a new password if the original is lost. Additionally, an
 administrator is able to reset the user's password using this plugin.

 -----------------------------------------------------------------------

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program. If not, see http://www.gnu.org/licenses/.

 @author-current: Jerry Elmore <jerry.r.elmore@silverfox.email>
 
 @authors-original: Fabio Perrella and Thiago Coutinho (Locaweb)

 -----------------------------------------------------------------------

 Version 1.10:
 
 Date: 17-Dec-2018
 
 -----------------------------------------------------------------------

##### 1.    Dependencies
##### 1.1   Installation
##### 2.    Notes
##### 3.    Compatibility
##### 4.    Disclaimers

 -----------------------------------------------------------------------

###### 1. Dependencies:
  `password` [plugin](https://github.com/roundcube/roundcubemail/tree/master/plugins/password)

  __Note__: `forgot_password` __must__ be placed in in `RC_INSTALL/config/config.inc.php` plugins 
     array __after__ `password`.

  `forgot_password` table will need to be created in RC installation's SQL database (e.g., `roundcubedb`).

###### 1.1 Installation:
Clone the repo to your `RC_INSTALL/plugins` directory, e.g. 
`git clone git@github.com:jerryrelmore/roundcube-forgot_password.git`

Once the repo is cloned, rename the directory from `RC_INSTALL/plugins/roundcube-forgot_password` 
to `RC_INSTALL/plugins/forgot_password`

Update `RC_INSTALL/config/config.inc.php` and add the following (note that `forgot_password` __must__ 
come after `password`):
```
  $config['plugins'] = array(
		'password',
		'forgot_password'
  );
```

__OPTIONAL__: Update `RC_INSTALL/plugins/forgot_password/js/forgot_password.js` and change the 
`login_form` div to another div on your login page.

Setup a `no-reply@your.domain.com` account from which to send emails containing the reset links.

Copy `RC_INSTALL/plugins/forgot_password/config.inc.php.dist` to `RC_INSTALL/plugins/forgot_password/config.inc.php` 
and add the information as indicated within the file. Unfortunately, in the current version your reply account's 
password will be stored as plain-text so the author assumes you know what needs to happen to secure your own 
installation against malicious use. ;) 

__Hint__: Setup permissions the way you setup permissions for your main RC_INSTALL 
config.inc.php.

Search for `$link` variables within `forgot_password.php` and remove `login/` portion of sub-URL and 
add any that may be necessary to direct the plugin to your RC installation's landing/login page. For example, 
if you go to `https://your.domain.com` to login to RC, then just remove `login/`. However, if you go 
to `https://your.domain.com/this/is/my/RC/install/login/page`, then you will need to replace `login/` with 
`/this/is/my/RC/install/login/page`.

At this point, and due to the plugin's still extremely alpha state for newer versions of RC, you need to 
`tail -f /var/log/syslog` or `tail -f /var/log/messages`, go to your RC installation's login screen, click 
forgot password link and start the debug/customization for your own installation.

###### 2. Notes:
Both the current `latest` and `master` repos are still works in progress. This plugin is functional at this point on 
the current author's installation, but will need massaging by a competent administrator to work on any other installation. 
The current author hopes to get the plugin to a more mature/releasable state but it is not high on the priority list. 

Feel free to fork as I did and run with it!

###### 3. Compatibility:
The current version was tested (and is theoretically compatible with) Roundcube version 1.3.8.

###### 4. Disclaimers:
Version 1.10 is a fork of the original, long-unmaintained version 1.0 [here](https://github.com/saas-dev/roundcube-forgot_password). 
It is still definitely "not ready for primetime" with newer RC versions and if you use it, you do so at your own risk. 

Support is not guaranteed but I may be able to provide very limited assistance.
