/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSRegularExpression;

@interface AFPhonemeMapper : NSObject {

	NSString* _languageCode;
	NSDictionary* _phonemeMap;
	NSRegularExpression* _regex;

}
+(id)_mapForLanguageCode:(id)arg1 ;
+(id)_buildRegexMatchingSubstrings:(id)arg1 ;
-(id)initWithLanguageCode:(id)arg1 ;
-(id)stringByReplacingPhonemesInString:(id)arg1 ;
@end

