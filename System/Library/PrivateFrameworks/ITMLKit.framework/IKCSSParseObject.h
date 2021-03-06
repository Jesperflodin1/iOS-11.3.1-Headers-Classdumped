/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class NSArray;

@interface IKCSSParseObject : NSObject {

	NSArray* _cssValue;
	long long _type;
	NSRange _range;

}

@property (nonatomic,retain) NSArray * cssValue;              //@synthesize cssValue=_cssValue - In the implementation block
@property (assign,nonatomic) long long type;                  //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) NSRange range;                   //@synthesize range=_range - In the implementation block
+(id)stringifyList:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(NSArray *)cssValue;
-(void)setCssValue:(NSArray *)arg1 ;
@end

