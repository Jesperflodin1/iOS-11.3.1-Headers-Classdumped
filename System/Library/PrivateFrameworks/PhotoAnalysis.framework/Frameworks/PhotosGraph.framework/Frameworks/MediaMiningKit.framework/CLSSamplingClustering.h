/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSDataDensityClustering.h>

@interface CLSSamplingClustering : CLSDataDensityClustering {

	unsigned long long _numberOfClusters;

}

@property (assign,nonatomic) unsigned long long numberOfClusters;              //@synthesize numberOfClusters=_numberOfClusters - In the implementation block
-(unsigned long long)numberOfClusters;
-(void)setNumberOfClusters:(unsigned long long)arg1 ;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
@end

