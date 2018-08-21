/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDModelAsset, NSSet;

@interface TDModelRenditionSpec : TDRenditionSpec

@property (nonatomic,retain) TDModelAsset * asset; 
@property (nonatomic,retain) NSSet * childRenditions; 
+(id)fetchRequest;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(void)processSubModelObjectsInDocument:(id)arg1 ;
-(void)processMesh:(id)arg1 withParent:(id)arg2 parentKeySpec:(id)arg3 inDocument:(id)arg4 ;
@end
