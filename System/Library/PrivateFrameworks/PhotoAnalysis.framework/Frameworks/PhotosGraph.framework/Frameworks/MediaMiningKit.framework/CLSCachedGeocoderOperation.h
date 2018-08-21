/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PipelineKit/PIOperationSubclass.h>

@interface CLSCachedGeocoderOperation : PIOperationSubclass {

	id _location;
	double _accuracy;

}
+(id)operationWithLocation:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(id)operationWithLocation:(id)arg1 ;
+(id)operationWithLocation:(id)arg1 withAccuracy:(double)arg2 ;
+(double)recommendedAccuracy;
-(void)cancel;
-(id)initWithLocation:(id)arg1 withAccuracy:(double)arg2 ;
-(void)execute;
@end
