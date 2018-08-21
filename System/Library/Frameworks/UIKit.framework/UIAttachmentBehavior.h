/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@class PKExtendedPhysicsBody, PKPhysicsJoint, NSArray;

@interface UIAttachmentBehavior : UIDynamicBehavior {

	CGPoint _anchorPoint;
	CGPoint _anchorPointA;
	CGPoint _anchorPointB;
	PKExtendedPhysicsBody* _anchorBody;
	PKPhysicsJoint* _joint;
	double _damping;
	double _frequency;
	double _length;
	CGVector _axis;
	unsigned long long _attachmentType;
	long long _type;
	struct {
		unsigned dampingSet : 1;
		unsigned frequencySet : 1;
		unsigned lengthSet : 1;
		unsigned rangeSet : 1;
		unsigned frictionTorqueSet : 1;
		unsigned isRevolute : 1;
	}  _stateFlags;
	long long _attachedBehaviorType;
	double _frictionTorque;
	CGPoint _attachmentRange;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,readonly) long long attachedBehaviorType;              //@synthesize attachedBehaviorType=_attachedBehaviorType - In the implementation block
@property (assign,nonatomic) CGPoint anchorPoint; 
@property (assign,nonatomic) double length; 
@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double frequency; 
@property (assign,nonatomic) double frictionTorque;                         //@synthesize frictionTorque=_frictionTorque - In the implementation block
@property (assign,nonatomic) CGPoint attachmentRange;                       //@synthesize attachmentRange=_attachmentRange - In the implementation block
+(BOOL)_isPrimitiveBehavior;
+(id)slidingAttachmentWithItem:(id)arg1 attachedToItem:(id)arg2 attachmentAnchor:(CGPoint)arg3 axisOfTranslation:(CGVector)arg4 ;
+(id)slidingAttachmentWithItem:(id)arg1 attachmentAnchor:(CGPoint)arg2 axisOfTranslation:(CGVector)arg3 ;
+(id)limitAttachmentWithItem:(id)arg1 offsetFromCenter:(UIOffset)arg2 attachedToItem:(id)arg3 offsetFromCenter:(UIOffset)arg4 ;
+(id)fixedAttachmentWithItem:(id)arg1 attachedToItem:(id)arg2 attachmentAnchor:(CGPoint)arg3 ;
+(id)pinAttachmentWithItem:(id)arg1 attachedToItem:(id)arg2 attachmentAnchor:(CGPoint)arg3 ;
-(id)init;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(id)description;
-(void)setDamping:(double)arg1 ;
-(double)length;
-(long long)type;
-(NSArray *)items;
-(CGPoint)anchorPoint;
-(id)initWithItem:(id)arg1 attachedToItem:(id)arg2 ;
-(id)initWithItem:(id)arg1 attachedToAnchor:(CGPoint)arg2 ;
-(void)_updateJointWithRange:(CGPoint)arg1 ;
-(void)_changedParameter;
-(id)initWithItem:(id)arg1 offsetFromCenter:(UIOffset)arg2 attachedToItem:(id)arg3 offsetFromCenter:(UIOffset)arg4 ;
-(void)setFrictionTorque:(double)arg1 ;
-(id)initWithItem:(id)arg1 point:(CGPoint)arg2 attachedToAnchor:(CGPoint)arg3 ;
-(id)initWithItem:(id)arg1 point:(CGPoint)arg2 attachedToItem:(id)arg3 point:(CGPoint)arg4 ;
-(id)initWithItem:(id)arg1 offsetFromCenter:(UIOffset)arg2 attachedToAnchor:(CGPoint)arg3 ;
-(void)setLength:(double)arg1 ;
-(void)_reevaluateJoint;
-(double)damping;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(void)setAttachmentRange:(CGPoint)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(long long)attachedBehaviorType;
-(double)frictionTorque;
-(CGPoint)attachmentRange;
@end

