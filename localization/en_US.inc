<?php

$labels = array();
$labels['forgotpassword'] = 'I forgot my password';
$labels['passwordrecovery'] = 'Forgot Password';
$labels['email_subject'] = 'Instructions to generate new password';
$labels['admin_alert_email_subject'] = 'Request for password change';
$labels['pwreminder'] = 'Password Reminder';
$labels['forgot_passwordenabled'] = 'Reminder enabled';
$labels['forgot_passwordisenabled'] = 'Reminder is enabled';
$labels['forgot_passworddisabled'] = 'Reminder is disabled';
$labels['forgot_passwordaddress'] = 'Send Password to';
$labels['forgot_passwordquestion'] = 'Secret Question';
$labels['forgot_passwordanswer'] = 'Secret Answer';
$labels['forgot_passwordanswerconfirm'] = 'Confirm Secret Answer';
$labels['forgot_passwordaddidentity'] = 'Please add an identity';
$labels['forgot_passwordadd'] = 'add';
$labels['forgot_passwordresetpw'] = 'Submit';
$labels['forgot_passwordexit'] = 'Cancel';
$labels['new_password'] = 'New password';
$labels['new_password_confirmation'] = 'Confirmation';
$labels['no_alternative_email_warning'] = 'Enter an alternate email address.';
$labels['click_here'] = 'Click here';

$messages = array();
$messages['forgot_passwordquestionempty'] = 'Please enter your Secret Question';
$messages['forgot_passworduserempty'] = 'Please enter your email address';
$messages['forgot_passwordanswerempty'] = 'Please enter your Secret Answer';
$messages['forgot_passwordanswernotmatch'] = 'Secret Answer does not match';
$messages['forgot_passwordactive'] = 'Password Reminder will be enabled';
$messages['forgot_passwordinactive'] = 'Password Reminder is disabled';
$messages['forgot_passwordusernotfound'] ='User not found';
$messages['forgot_passwordimcomplete'] ='Your Reminder Settings are incomplete. Please contact the Administrator';
$messages['forgot_passwordfailed'] = 'Secret Answer is incorrect.';
$messages['sendingfailed'] = 'There was an error sending the email with instructions to generate a new password. Please try again later.';
$messages['checkaccount'] = 'An email with instructions to generate a new password has been sent to your alternate email address.';
$messages['senttoadmin'] = 'Your account does not have an alternate email address registered, so an email has been sent to the Administrator to change your password. Please also submit a request for help at https://www.silverfox.email/help and provide our team with your email address and an alternative way to reach you.';
$messages['autobanned'] = 'Access is temporarily locked (too many invalid login attempts). Please try again later or submit a request for help at https://www.silverfox.email/help and provide our team with your email address and an alternative way to reach you.';
$messages['nodeleteforgot_passwordaddress'] = 'This identity is linked to your Password reminder.';
$messages['invalidtoken'] = 'Invalid token.';
$messages['password_confirmation_invalid'] = 'Invalid password verification';
$messages['password_changed'] = 'Password changed successfully!';
$messages['password_not_changed'] = 'There was an error changing your password. Please try again later or submit a request for help at https://www.silverfox.email/help and provide our team with your email address and an alternative way to reach you.';
$messages['notice_no_alternative_email_warning'] = 'You do not have an alternate email address, %s to add one!';
$messages['alternative_email_updated'] = 'Your backup email has been changed.';
$messages['alternative_email_invalid'] = 'Please provide a valid alterate email address.';

?>

