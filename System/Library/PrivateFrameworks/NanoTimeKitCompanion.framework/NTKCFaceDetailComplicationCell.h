/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@class NSString, NTKComplication;

@interface NTKCFaceDetailComplicationCell : NTKCDetailTableViewCell {

	BOOL _dateSlot;
	BOOL _active;
	NSString* _slot;
	NTKComplication* _complication;

}

@property (nonatomic,readonly) NSString * slot;                           //@synthesize slot=_slot - In the implementation block
@property (nonatomic,retain) NTKComplication * complication;              //@synthesize complication=_complication - In the implementation block
@property (nonatomic,readonly) BOOL dateSlot;                             //@synthesize dateSlot=_dateSlot - In the implementation block
@property (assign,nonatomic) BOOL active;                                 //@synthesize active=_active - In the implementation block
+(id)reuseIdentifier;
-(double)rowHeight;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(NSString *)slot;
-(NTKComplication *)complication;
-(id)_inactiveColor;
-(void)_updateDetailText;
-(id)_activeColor;
-(id)initWithSlot:(id)arg1 dateSlot:(BOOL)arg2 inFace:(id)arg3 ;
-(void)setComplication:(NTKComplication *)arg1 ;
-(BOOL)dateSlot;
@end

