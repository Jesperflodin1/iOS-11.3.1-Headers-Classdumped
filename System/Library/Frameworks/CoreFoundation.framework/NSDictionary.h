/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface NSDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

@property (readonly) unsigned long long count; 
+(id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2 ;
+(id)dictionaryWithContentsOfURL:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)dictionaryWithContentsOfFile:(id)arg1 ;
+(id)dictionaryWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)newDictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
+(id)dictionaryWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)sharedKeySetForKeys:(id)arg1 ;
+(id)dictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
+(id)dictionaryWithObject:(id)arg1 forKey:(id)arg2 ;
+(id)dictionary;
+(id)dictionaryWithObjectsAndKeys:(id)arg1 ;
+(id)dictionaryWithDictionary:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_web_numberForKey:(id)arg1 ;
-(int)_web_intForKey:(id)arg1 ;
-(id)_web_objectForMIMEType:(id)arg1 ;
-(id)_web_stringForKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)fileOwnerAccountName;
-(unsigned long long)fileOwnerAccountNumber;
-(id)fileGroupOwnerAccountName;
-(unsigned long long)fileGroupOwnerAccountNumber;
-(long long)fileSystemNumber;
-(unsigned long long)fileSystemFileNumber;
-(BOOL)fileExtensionHidden;
-(unsigned)fileHFSCreatorCode;
-(unsigned)fileHFSTypeCode;
-(BOOL)fileIsImmutable;
-(BOOL)fileIsAppendOnly;
-(id)fileOwnerAccountID;
-(id)fileGroupOwnerAccountID;
-(id)fileType;
-(unsigned long long)fileSize;
-(id)fileModificationDate;
-(id)fileCreationDate;
-(unsigned long long)filePosixPermissions;
-(id)_stringToWrite;
-(id)descriptionInStringsFileFormat;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)__getValue:(id*)arg1 forKey:(id)arg2 ;
-(id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)keysSortedByValueWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)invertedDictionary;
-(id)keyOfEntryPassingTest:(/*^block*/id)arg1 ;
-(id)initWithObject:(id)arg1 forKey:(id)arg2 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(unsigned long long)_cfTypeID;
-(void)getKeys:(id*)arg1 ;
-(BOOL)containsKey:(id)arg1 ;
-(id)keysSortedByValueUsingComparator:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(BOOL)containsObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS13*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithObjectsAndKeys:(id)arg1 ;
-(id)allKeys;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allObjects;
-(id)objectEnumerator;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(id)keyEnumerator;
-(id)allValues;
-(id)initWithObjects:(id)arg1 forKeys:(id)arg2 ;
-(id)keysOfEntriesPassingTest:(/*^block*/id)arg1 ;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(id)allKeysForObject:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)__apply:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(BOOL)isNSDictionary__;
-(unsigned long long)countForKey:(id)arg1 ;
-(id)keysSortedByValueUsingSelector:(SEL)arg1 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
@end

