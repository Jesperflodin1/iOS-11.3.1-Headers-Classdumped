/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKMedicalIDEditorCell.h>

@class _HKEmergencyContact;

@interface HKMedicalIDEditorEmergencyContactCell : HKMedicalIDEditorCell {

	_HKEmergencyContact* _contact;

}

@property (nonatomic,retain) _HKEmergencyContact * contact;              //@synthesize contact=_contact - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(_HKEmergencyContact *)contact;
-(void)setContact:(_HKEmergencyContact *)arg1 ;
-(id)formattedValue;
-(void)_labelTapped:(id)arg1 ;
@end

