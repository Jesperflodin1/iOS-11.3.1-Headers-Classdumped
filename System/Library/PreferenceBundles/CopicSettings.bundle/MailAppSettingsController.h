/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/CopicSettings.bundle/CopicSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcopic.dylib/CopicBaseSettingsController.h>

@interface MailAppSettingsController : CopicBaseSettingsController
-(BOOL)isEnabledForKey:(id)arg1 settingsFileName:(id)arg2 ;
-(id)getImageCellSpecifierNames;
-(void)saveDefaultContactImage:(id)arg1 ;
-(void)saveDefaultContactImageThumbnail:(id)arg1 ;
-(BOOL)isRoundPicsEnabled:(id)arg1 ;
-(void)preparePathAndRemoveItem:(id)arg1 ;
-(void)mailAppEnabledOrDisabled:(id)arg1 specifier:(id)arg2 ;
-(void)restoreAvatarsMail:(id)arg1 ;
-(void)selectDefaultAvatarMail:(id)arg1 ;
-(void)setPicturesForSpecifiers:(id)arg1 round:(BOOL)arg2 ;
-(BOOL)isMailAppEnabled;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)insertSpecifier:(id)arg1 atIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(id)specifiers;
-(void)removeItemAtPath:(id)arg1 ;
@end

