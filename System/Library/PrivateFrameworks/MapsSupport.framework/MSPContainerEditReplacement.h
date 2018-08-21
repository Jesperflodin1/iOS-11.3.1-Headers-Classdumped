/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSIndexSet;


@protocol MSPContainerEditReplacement <MSPContainerEdit>
@property (nonatomic,readonly) NSArray * originalImmutableObjects; 
@property (nonatomic,readonly) NSArray * replacementImmutableObjects; 
@property (nonatomic,readonly) NSIndexSet * indexesOfReplacedObjects; 
@required
-(NSArray *)originalImmutableObjects;
-(NSArray *)replacementImmutableObjects;
-(NSIndexSet *)indexesOfReplacedObjects;

@end

