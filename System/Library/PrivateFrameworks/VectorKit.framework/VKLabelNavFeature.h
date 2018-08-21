/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol VKLabelNavFeature
@property (nonatomic,readonly) BOOL isOnRoute; 
@property (nonatomic,readonly) BOOL isAwayFromRoute; 
@property (nonatomic,readonly) PolylineCoordinate routeOffset; 
@property (nonatomic,readonly) BOOL isRamp; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * shieldDisplayGroup; 
@property (nonatomic,readonly) BOOL isStartOfRoadName; 
@property (nonatomic,readonly) BOOL isInGuidance; 
@property (nonatomic,readonly) long long intraRoadPriority; 
@property (nonatomic,readonly) BOOL isGuidanceStepStart; 
@property (nonatomic,readonly) BOOL isEtaFeature; 
@property (nonatomic,readonly) BOOL isTrafficCameraFeature; 
@property (assign,nonatomic) BOOL isPicked; 
@required
-(BOOL)isRamp;
-(NSString *)name;
-(void)layoutWithNavContext:(NavContext*)arg1;
-(BOOL)isAwayFromRoute;
-(PolylineCoordinate)routeOffset;
-(NSString *)shieldDisplayGroup;
-(BOOL)isStartOfRoadName;
-(BOOL)isInGuidance;
-(long long)intraRoadPriority;
-(BOOL)isGuidanceStepStart;
-(BOOL)isEtaFeature;
-(BOOL)isTrafficCameraFeature;
-(void)setIsPicked:(BOOL)arg1;
-(BOOL)isOnRoute;
-(BOOL)isPicked;

@end

