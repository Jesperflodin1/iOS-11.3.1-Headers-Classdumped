/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXMLanguage, NSLocale;

@interface AXMTextProcessingOperation : NSObject {

	AXMLanguage* _language;

}

@property (nonatomic,readonly) NSLocale * lexiconLocale; 
@property (nonatomic,readonly) AXMLanguage * language;                //@synthesize language=_language - In the implementation block
+(id)operationWithLanguage:(id)arg1 ;
+(id)operationWithSystemLanguage;
-(AXMLanguage *)language;
-(id)_initWithLanguage:(id)arg1 ;
-(NSLocale *)lexiconLocale;
@end
