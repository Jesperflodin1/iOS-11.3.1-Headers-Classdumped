/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSString, GEOFeatureStyleAttributes;

@interface VKFeatureMarker : NSObject {

	shared_ptr<md::FeatureMarker>* _actualFeatureMarker;

}

@property (readonly) const shared_ptr<md::FeatureMarker>* actualFeatureMarker; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * shortName; 
@property (nonatomic,readonly) unsigned long long featureID; 
@property (nonatomic,readonly) unsigned long long venueID; 
@property (nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
+(id)markerWithFeatureMarker:(const shared_ptr<md::FeatureMarker>*)arg1 ;
-(unsigned long long)venueID;
-(NSString *)shortName;
-(void)dealloc;
-(NSString *)name;
-(GEOFeatureStyleAttributes *)styleAttributes;
-(id)initWithFeatureMarkerPtr:(const shared_ptr<md::FeatureMarker>*)arg1 ;
-(const shared_ptr<md::FeatureMarker>*)actualFeatureMarker;
-(unsigned long long)featureID;
@end
