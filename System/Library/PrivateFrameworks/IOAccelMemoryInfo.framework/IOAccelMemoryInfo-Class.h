/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSSet;

@interface IOAccelMemoryInfo : NSObject {

	NSDictionary* dict;
	id _expansionData;

}

@property (readonly) unsigned long long memoryPool; 
@property (readonly) unsigned long long length; 
@property (readonly) unsigned long long residentLength; 
@property (readonly) unsigned long long dirtyLength; 
@property (readonly) BOOL wired; 
@property (readonly) BOOL cachedCopy; 
@property (readonly) BOOL cacheDirty; 
@property (readonly) BOOL purgeable; 
@property (readonly) BOOL orphaned; 
@property (readonly) NSArray * devices; 
@property (readonly) unsigned surfaceID; 
@property (readonly) NSSet * processIDs; 
@property (readonly) NSSet * blamedProcesses; 
@property (readonly) NSArray * mappings; 
@property (readonly) NSArray * openglObjects; 
@property (readonly) NSArray * openclObjects; 
@property (readonly) NSArray * formattedDescriptions; 
+(void)validateDictionary:(id)arg1 ;
+(id)newKernelAllocationList:(id)arg1 ;
+(void)newKernelAllocationTotals:(id)arg1 totalsReturn:(id)arg2 errorReturn:(id)arg3 ;
+(void)collectDataWithCompletionQueue:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)collectAllocationTotalsWithOptions:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)purgeAllVidMem;
-(BOOL)purgeable;
-(unsigned long long)memoryPool;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)length;
-(NSArray *)devices;
-(NSArray *)mappings;
-(BOOL)cachedCopy;
-(BOOL)cacheDirty;
-(NSArray *)openglObjects;
-(NSArray *)openclObjects;
-(unsigned long long)dirtyLength;
-(unsigned long long)residentLength;
-(BOOL)orphaned;
-(BOOL)wired;
-(unsigned)surfaceID;
-(NSSet *)processIDs;
-(NSSet *)blamedProcesses;
-(id)blamedProcessesForProcess:(int)arg1 ;
-(NSArray *)formattedDescriptions;
@end

