/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSTextCheckingResult, NSString;

@interface NSLookupMatch : NSObject {

	unsigned long long _matchType;
	NSRange _range;
	double _score;
	NSTextCheckingResult* _dataDetectorResult;
	NSString* _languageIdentifier;

}

@property (retain) NSTextCheckingResult * dataDetectorResult;              //@synthesize dataDetectorResult=_dataDetectorResult - In the implementation block
@property (retain) NSString * languageIdentifier;                          //@synthesize languageIdentifier=_languageIdentifier - In the implementation block
@property (readonly) unsigned long long matchType;                         //@synthesize matchType=_matchType - In the implementation block
@property (readonly) NSRange range;                                        //@synthesize range=_range - In the implementation block
@property (readonly) double score;                                         //@synthesize score=_score - In the implementation block
+(id)matchesInString:(id)arg1 types:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(id)initWithType:(unsigned long long)arg1 range:(NSRange)arg2 score:(double)arg3 ;
-(void)setDataDetectorResult:(NSTextCheckingResult *)arg1 ;
-(NSTextCheckingResult *)dataDetectorResult;
-(NSString *)languageIdentifier;
-(void)setLanguageIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSRange)range;
-(double)score;
-(unsigned long long)matchType;
@end
