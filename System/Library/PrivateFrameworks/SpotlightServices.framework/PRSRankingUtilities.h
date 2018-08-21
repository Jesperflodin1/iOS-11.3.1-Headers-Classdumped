/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PRSRankingUtilities : NSObject
+(void)computeDateCountsForDates:(id)arg1 countLastYear:(unsigned long long*)arg2 countLastMonth:(unsigned long long*)arg3 countLastWeek:(unsigned long long*)arg4 countLastDay:(unsigned long long*)arg5 ;
+(id)value:(id)arg1 withSigFigs:(id)arg2 ;
+(id)bundleIDForCategory:(id)arg1 ;
+(id)categoryForBundleID:(id)arg1 ;
+(BOOL)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 isEqualToString:(id)arg2 ;
+(BOOL)multiWordString:(id)arg1 hasPrefix:(id)arg2 ;
+(BOOL)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 hasPrefix:(id)arg2 locale:(id)arg3 ;
@end
