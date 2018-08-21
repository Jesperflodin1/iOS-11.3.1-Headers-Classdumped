/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@class NSMutableDictionary;

@interface NSRTFD : NSMutableDictionary {

	NSMutableDictionary* dict;

}
+(void)initialize;
-(BOOL)isPackage;
-(id)_getDocInfoForKey:(id)arg1 ;
-(id)getDirInfo:(BOOL)arg1 ;
-(unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 hardLinkPath:(id)arg5 ;
-(unsigned long long)initFromDocument:(id)arg1 ;
-(unsigned long long)addDirNamed:(id)arg1 lazy:(BOOL)arg2 ;
-(unsigned long long)addFileNamed:(id)arg1 fileAttributes:(id)arg2 ;
-(unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 markBusy:(BOOL)arg5 hardLinkPath:(id)arg6 ;
-(unsigned long long)internalWritePath:(id)arg1 errorHandler:(id)arg2 remapContents:(BOOL)arg3 hardLinkPath:(id)arg4 ;
-(id)tmpNameFromPath:(id)arg1 extension:(id)arg2 ;
-(id)nameFromPath:(id)arg1 extra:(id)arg2 ;
-(unsigned long long)internalSaveTo:(id)arg1 removeBackup:(BOOL)arg2 errorHandler:(id)arg3 temp:(id)arg4 backup:(id)arg5 ;
-(unsigned long long)internalSaveTo:(id)arg1 removeBackup:(BOOL)arg2 errorHandler:(id)arg3 ;
-(id)initWithPasteboardDataRepresentation:(id)arg1 ;
-(id)createRandomKey:(id)arg1 ;
-(id)createUniqueKey:(id)arg1 ;
-(id)getDocument:(id)arg1 docInfo:(id)arg2 ;
-(id)uniqueKey:(id)arg1 ;
-(id)addCommon:(id)arg1 docInfo:(id)arg2 value:(id)arg3 zone:(NSZone*)arg4 ;
-(id)replaceFile:(id)arg1 path:(id)arg2 ;
-(id)setPackage:(BOOL)arg1 ;
-(unsigned long long)initUnixFile:(id)arg1 ;
-(id)tmpNameFromPath:(id)arg1 ;
-(unsigned long long)saveToDocument:(id)arg1 removeBackup:(BOOL)arg2 errorHandler:(id)arg3 ;
-(id)replaceFile:(id)arg1 data:(id)arg2 ;
-(id)addFile:(id)arg1 ;
-(id)dataForFile:(id)arg1 ;
-(id)removeFile:(id)arg1 ;
-(id)copy:(id)arg1 into:(id)arg2 ;
-(id)addData:(id)arg1 name:(id)arg2 ;
-(long long)validatePath:(id)arg1 ignore:(id)arg2 ;
-(id)initFromElement:(id)arg1 ofDocument:(id)arg2 ;
-(unsigned long long)realAddDirNamed:(id)arg1 ;
-(unsigned long long)insertItem:(id)arg1 path:(id)arg2 dirInfo:(id)arg3 zone:(NSZone*)arg4 plist:(id)arg5 ;
-(id)serialize:(void*)arg1 length:(unsigned long long*)arg2 ;
-(id)freeSerialized:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)initFromSerialized:(id)arg1 ;
-(id)pasteboardDataRepresentation;
-(BOOL)_isLink:(id)arg1 ;
-(id)init;
-(id)copy;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)keyEnumerator;
-(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)dataRepresentation;
-(id)addLink:(id)arg1 ;
@end

