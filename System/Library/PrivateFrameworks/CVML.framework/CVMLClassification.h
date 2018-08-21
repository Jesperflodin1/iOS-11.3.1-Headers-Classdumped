/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVMLObservation.h>

@class NSString;

@interface CVMLClassification : CVMLObservation {

	NSString* _classification;
	float _confidence;

}

@property (readonly) NSString * classification;              //@synthesize classification=_classification - In the implementation block
-(id)debugDescription;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(void)setClassification:(id)arg1 withConfidence:(float)arg2 ;
-(NSString *)classification;
@end
