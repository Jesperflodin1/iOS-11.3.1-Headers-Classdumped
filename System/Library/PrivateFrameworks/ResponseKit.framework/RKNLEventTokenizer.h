/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ResponseKit/ResponseKit-Structs.h>
@class NSString;

@interface RKNLEventTokenizer : NSObject {

	NSString* _languageID;
	CFStringTokenizerRef _tokenizer;

}

@property (assign) CFStringTokenizerRef tokenizer;              //@synthesize tokenizer=_tokenizer - In the implementation block
@property (readonly) NSString * languageID;                     //@synthesize languageID=_languageID - In the implementation block
+(void)initialize;
+(BOOL)isSpecialToken:(id)arg1 ;
-(void)dealloc;
-(CFStringTokenizerRef)tokenizer;
-(BOOL)hasEmoticon:(id)arg1 ;
-(id)processForEmoticons:(id)arg1 ;
-(id)processForHyphenation:(id)arg1 ;
-(id)tokenizeWithDataDetectors:(id)arg1 ;
-(id)processForEmoticonsAndEmojis:(id)arg1 ;
-(id)getTokens:(id)arg1 ;
-(id)buildTokenSquence:(id)arg1 withOffset:(unsigned long long)arg2 ;
-(void)setTokenizer:(CFStringTokenizerRef)arg1 ;
-(NSString *)languageID;
-(id)initWithLanguageID:(id)arg1 ;
-(id)transform:(id)arg1 ;
@end

