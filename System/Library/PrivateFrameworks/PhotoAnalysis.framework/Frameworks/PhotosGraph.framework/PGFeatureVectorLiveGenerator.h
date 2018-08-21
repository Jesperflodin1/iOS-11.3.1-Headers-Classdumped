/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeatureVectorGenerator.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class NSString;

@interface PGFeatureVectorLiveGenerator : PGFeatureVectorGenerator <CLLocationManagerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enumerateFeatureVectorsByTypeUsingBlock:(/*^block*/id)arg1 ;
-(id)_nearestAssetsForCurrentDate:(id)arg1 atLocation:(id)arg2 ;
@end
