/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GenerationalStorage/GenerationalStorage-Structs.h>
@interface GSStorageManager : NSObject
+(void)initialize;
+(id)manager;
+(BOOL)_isPermanentStorageSupportedForStatFSInfo:(statfs*)arg1 error:(id*)arg2 ;
+(BOOL)_isPermanentStorageSupportedForFD:(int)arg1 error:(id*)arg2 ;
-(id)permanentStorageForItemAtURL:(id)arg1 allocateIfNone:(BOOL)arg2 error:(id*)arg3 ;
-(id)persistentIdentifierInStorage:(NSObject*)arg1 forAdditionNamed:(id)arg2 inNameSpace:(id)arg3 ;
-(BOOL)isPermanentStorageSupportedAtURL:(id)arg1 error:(id*)arg2 ;
-(id)temporaryStorageForItemAtURL:(id)arg1 locatedAtURL:(id)arg2 error:(id*)arg3 ;
-(id)additionForItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeTemporaryStorage:(id)arg1 error:(id*)arg2 ;
-(void)_connectionWithDaemonWasLost;
-(id)stagingPrefixForDocumentID:(id)arg1 ;
-(BOOL)isItemAtURLValidInsidePermanentStorage:(id)arg1 error:(id*)arg2 ;
-(BOOL)isItemAtURLInsidePermanentStorage:(id)arg1 error:(id*)arg2 ;
-(BOOL)deallocateDocumentIDOfItemAtURL:(id)arg1 error:(id*)arg2 ;
@end

