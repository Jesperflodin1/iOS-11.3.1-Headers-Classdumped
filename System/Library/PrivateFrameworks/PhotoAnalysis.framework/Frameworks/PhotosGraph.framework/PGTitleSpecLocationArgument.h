/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGTitleSpecArgument.h>

@class NSSet;

@interface PGTitleSpecLocationArgument : PGTitleSpecArgument {

	BOOL _filterLocations;
	unsigned long long _type;
	NSSet* _usedLocationNodes;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (readonly) BOOL filterLocations;                 //@synthesize filterLocations=_filterLocations - In the implementation block
@property (retain) NSSet * usedLocationNodes;              //@synthesize usedLocationNodes=_usedLocationNodes - In the implementation block
+(id)argumentWithLocationType:(unsigned long long)arg1 filterLocations:(BOOL)arg2 ;
-(unsigned long long)type;
-(id)_resolvedStringWithMomentNodes:(id)arg1 ;
-(id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 ;
-(void)setUsedLocationNodes:(NSSet *)arg1 ;
-(NSSet *)usedLocationNodes;
-(id)initWithLocationType:(unsigned long long)arg1 filterLocations:(BOOL)arg2 ;
-(id)_generateLocationTitleWithOptions:(id)arg1 ;
-(BOOL)filterLocations;
@end

