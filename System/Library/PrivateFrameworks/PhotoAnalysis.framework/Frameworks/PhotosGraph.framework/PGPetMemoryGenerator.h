/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGPetMemoryGenerator : PGFeaturedMemoryGenerator
-(id)_listOfSceneInformation:(id)arg1 ;
-(void)_randomEnumerateOverLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 rejectedNumbers:(SCD_Struct_PG0*)arg3 enumerationBlock:(/*^block*/id)arg4 ;
-(void)_enumerateBestPotentialMemoriesInLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(id)petSceneInformation;
-(id)blacklistPetSceneInformation;
-(void)_potentialPetMemoryForPet:(id)arg1 results:(/*^block*/id)arg2 ;
@end

