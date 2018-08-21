/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _KSTextReplacementHelper : NSObject
+(void)fetchConfigurationPlistIfNeeded;
+(id)aggdPrefix;
+(id)sampleShortcut;
+(id)errorWithCode:(long long)arg1 failedAdds:(id)arg2 failedDeletes:(id)arg3 ;
+(void)logAggdValueForSyncIsPull:(BOOL)arg1 success:(BOOL)arg2 ;
+(long long)validateTextReplacement:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 forEntry:(id)arg2 ;
+(id)textReplaceEntryFromTIDictionaryValue:(id)arg1 ;
+(id)transactionFromTextReplacementEntry:(id)arg1 forDelete:(BOOL)arg2 ;
+(id)multipleAddErrors:(id)arg1 removeErrors:(id)arg2 ;
+(void)extractAggdMetricsForTextReplacement:(id)arg1 ;
+(id)errorStringForCode:(long long)arg1 ;
+(void)logPhraseWordCount:(long long)arg1 ;
+(id)appleLanguagesPreference;
+(id)fetchConfigurationPlist;
@end
