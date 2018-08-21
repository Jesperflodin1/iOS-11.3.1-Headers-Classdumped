/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallLogProKit.framework/CallLogProKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCLTextView, NSString;

@interface SCLALertViewTextFieldBuilder : NSObject {

	SCLTextView* _textField;
	NSString* _parameterTitle;
	/*^block*/id _title;

}

@property (nonatomic,copy) NSString * parameterTitle;                     //@synthesize parameterTitle=_parameterTitle - In the implementation block
@property (assign,nonatomic,__weak) SCLTextView * textField;              //@synthesize textField=_textField - In the implementation block
@property (nonatomic,copy) id title;                                      //@synthesize title=_title - In the implementation block
-(void)setParameterTitle:(NSString *)arg1 ;
-(NSString *)parameterTitle;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(SCLTextView *)textField;
-(void)setTextField:(SCLTextView *)arg1 ;
@end

