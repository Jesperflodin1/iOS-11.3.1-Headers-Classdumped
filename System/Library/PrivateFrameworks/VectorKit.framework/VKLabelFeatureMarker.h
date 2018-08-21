/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKFeatureMarker.h>

@interface VKLabelFeatureMarker : VKFeatureMarker {

	shared_ptr<md::LabelFeatureMarker>* _actualLabelFeatureMarker;

}

@property (assign,nonatomic) int viewProximity; 
+(id)markerWithLabelFeatureMarker:(const shared_ptr<md::LabelFeatureMarker>*)arg1 ;
-(CGVector)direction;
-(id)initWithFeatureMarkerPtr:(const shared_ptr<md::FeatureMarker>*)arg1 ;
-(id)initWithLabelFeatureMarkerPtr:(const shared_ptr<md::LabelFeatureMarker>*)arg1 ;
-(float)closestApproach;
-(int)viewProximity;
-(void)setViewProximity:(int)arg1 ;
@end

