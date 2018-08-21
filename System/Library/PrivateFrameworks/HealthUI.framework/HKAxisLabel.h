/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HKAxisLabel : NSObject {

	NSString* _text;
	id _location;
	long long _labelType;

}

@property (nonatomic,retain) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) id location;                      //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) long long labelType;              //@synthesize labelType=_labelType - In the implementation block
-(long long)labelType;
-(void)setLabelType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)location;
-(void)setLocation:(id)arg1 ;
@end

