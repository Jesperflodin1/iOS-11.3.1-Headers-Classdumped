/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKit/UILabel.h>

@interface _LapLabel : UILabel {

	BOOL _split;
	unsigned long long _lap;

}

@property (assign,nonatomic) unsigned long long lap;              //@synthesize lap=_lap - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)split;
-(void)setLap:(unsigned long long)arg1 ;
-(unsigned long long)lap;
@end

