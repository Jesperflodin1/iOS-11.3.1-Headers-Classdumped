/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MiroMemoryPosterStore : NSObject
-(void)deletePosterStoreForMemory:(id)arg1 ;
-(BOOL)posterImageExistsForMemory:(id)arg1 generationInfo:(id)arg2 ;
-(id)posterImageForMemory:(id)arg1 generationInfo:(id)arg2 ;
-(void)clearOldPostersForMemory:(id)arg1 saveInfo:(id)arg2 ;
-(void)storePosterImageWithData:(id)arg1 forMemory:(id)arg2 generationInfo:(id)arg3 ;
-(id)_sanitizedFullPosterFilename:(id)arg1 generationInfo:(id)arg2 ;
-(id)_storedPosterImageDirectoryForMemory:(id)arg1 ;
-(id)_sanitizedPosterDirectoryName:(id)arg1 ;
-(id)posterImageStorePathBase;
-(id)_storedPosterImagePathForMemory:(id)arg1 generationInfo:(id)arg2 ;
@end

