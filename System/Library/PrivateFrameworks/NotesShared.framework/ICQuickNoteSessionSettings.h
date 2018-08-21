/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICQuickNoteSessionSettings : NSObject
+(void)setSessionDuration:(long long)arg1 ;
+(long long)sessionDuration;
+(void)initialize;
+(BOOL)hasAccountSupportingLockScreen;
+(long long)showOnLockScreenSettingValue;
+(void)setShowOnLockScreen:(long long)arg1 ;
+(long long)showOnLockScreen;
+(void)disableNotesOnLockScreenIfNecessary;
+(void)updateNotesOnLockScreenWhenAccountSupportingLockScreenAdded;
@end

