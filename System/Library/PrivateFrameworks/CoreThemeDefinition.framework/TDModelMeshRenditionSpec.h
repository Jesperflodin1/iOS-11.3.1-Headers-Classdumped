/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDModelObjectRenditionSpec.h>

@class NSOrderedSet, MDLMesh;

@interface TDModelMeshRenditionSpec : TDModelObjectRenditionSpec

@property (nonatomic,retain) NSOrderedSet * submeshes; 
@property (nonatomic,retain) MDLMesh * mesh; 
+(id)fetchRequest;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
@end

