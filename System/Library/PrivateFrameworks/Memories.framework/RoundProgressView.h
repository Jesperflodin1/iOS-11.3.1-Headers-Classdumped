/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKit/UIView.h>

@interface RoundProgressView : UIView {

	double _progress;
	double _pieWidth;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double pieWidth;              //@synthesize pieWidth=_pieWidth - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(void)setPieWidth:(double)arg1 ;
-(double)pieWidth;
@end
