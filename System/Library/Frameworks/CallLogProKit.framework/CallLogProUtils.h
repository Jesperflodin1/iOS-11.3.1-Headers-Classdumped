/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallLogProKit.framework/CallLogProKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CallLogProUtils : NSObject
+(BOOL)isEmailAddress:(id)arg1 ;
+(BOOL)isPhoneNumber:(id)arg1 ;
+(BOOL)isIOS11;
+(BOOL)isRunningOnSandBoxMode;
+(id)getUnknownLabel;
+(id)plainPhoneNumber:(id)arg1 ;
+(id)getPhoneLabel:(id)arg1 flag:(long long)arg2 ;
+(id)callLogProDatabasePathWithDBName;
+(id)getAppName;
+(id)getCurrentVersion;
+(id)abDBQueue;
+(long long)getMultiValueRecordID:(id)arg1 ;
+(long long)getMultiValueEntryID:(id)arg1 ;
+(id)getContactStore;
+(id)plainPhoneNumber:(id)arg1 excludeCountryCode:(BOOL)arg2 ;
+(id)reportsFileDirectory;
+(void*)getAddressBook;
+(id)searchRecordsLikeQuery:(id)arg1 ;
+(id)sendMessageToSpringBoardAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 ;
+(void)postCFDistributedNotification:(id)arg1 params:(id)arg2 ;
+(id)callLogProDatabaseLocation;
+(void)logEventToFabric:(id)arg1 customAttributes:(id)arg2 ;
+(BOOL)versionCheck:(float)arg1 ;
+(id)settingsFileDirectory;
+(id)getLocalizedString:(id)arg1 value:(id)arg2 ;
+(id)getHourDescriptionString:(long long)arg1 detailed:(BOOL)arg2 ;
+(id)bundledImagesLocation;
+(void)cacheImage:(id)arg1 forKey:(id)arg2 ;
+(BOOL)isIOS9;
+(BOOL)canAccessAddressBook;
+(id)callLogProBundle;
+(id)getCallLogProBundle;
+(void)initializeImageCache;
+(BOOL)isMatchingIOSFound:(id)arg1 ;
+(BOOL)isIOS10;
+(BOOL)isIphone5;
+(BOOL)isIphoneX;
+(id)abDBImagesQueue;
+(id)settingsFilePath;
+(id)backupFileDirectory;
+(id)getLocalizedLabel:(id)arg1 ;
+(void)vibratePhone;
+(id)getTitleForEditButton;
+(id)getTitleForDoneButton;
+(id)getUIAlertTableTitle;
+(id)getOKButtonTitle;
+(id)getCancelButtonText;
+(id)getClearAllRecentsText;
+(id)getClearAllDialedText;
+(id)getClearAllReceivedText;
+(id)getClearAllMissedText;
+(id)getDeleteAllText;
+(id)getLocalizedCallTitleText;
+(id)getLocalizedFaceTimeTitleText;
+(id)getLocalizedSendMessageTitleText;
+(id)getLocalizedCreateNewContactTitleText;
+(id)getLocalizedAddToExistingContactTitleText;
+(id)getLocalizedShareContactTitleText;
+(void)copyBundledImagesToCacheFolder;
+(int)getHighlitedPhoneNumberPropertyIndex:(void*)arg1 entry:(id)arg2 ;
+(int)getHighlitedEmailPropertyIndex:(void*)arg1 entry:(id)arg2 ;
+(id)highlitedPhoneNumberIdentifier:(id)arg1 entry:(id)arg2 ;
+(id)highlitedEmailNumberIdentifier:(id)arg1 entry:(id)arg2 ;
+(id)getDiscriptiveTime:(long long)arg1 detailed:(BOOL)arg2 ;
+(id)getCallDuration:(long long)arg1 callFlag:(long long)arg2 isDescriptionRequired:(BOOL)arg3 ;
+(id)getImage:(id)arg1 ;
+(void)lastModifiedRecordData:(/*^block*/id)arg1 ;
+(id)getQueue;
+(id)getFileFormat:(unsigned long long)arg1 ;
+(void*)getPersonRecordFromDB:(int)arg1 fromAddressBook:(void*)arg2 ;
+(BOOL)canAccessContactStore;
+(void)requestContactStoreAccess:(/*^block*/id)arg1 ;
+(id)getBuildNumber;
+(long long)spawnProcess:(id)arg1 ;
+(id)stringWithUTF8String:(const char*)arg1 ;
+(id)bundleIdentifier;
+(void)clearCache;
+(id)UDID;
+(id)dateFormatter;
+(id)formattedPhoneNumber:(id)arg1 ;
+(id)getLocalizedString:(id)arg1 ;
+(id)serialNumber;
+(id)platform;
-(void)dealloc;
@end
