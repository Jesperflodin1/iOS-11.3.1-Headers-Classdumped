/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _UIDebugLogStatement : NSObject {

	long long _type;
	unsigned long long _indentLevel;
	NSString* _prefix;
	NSString* _text;

}

@property (assign,nonatomic) long long type;                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long indentLevel;              //@synthesize indentLevel=_indentLevel - In the implementation block
@property (nonatomic,copy) NSString * prefix;                             //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy) NSString * text;                               //@synthesize text=_text - In the implementation block
-(id)init;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setPrefix:(NSString *)arg1 ;
-(unsigned long long)indentLevel;
-(void)setIndentLevel:(unsigned long long)arg1 ;
-(NSString *)prefix;
@end
