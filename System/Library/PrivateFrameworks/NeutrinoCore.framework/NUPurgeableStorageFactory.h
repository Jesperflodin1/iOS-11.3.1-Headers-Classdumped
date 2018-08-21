/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUStorageFactory.h>

@class NUPurgeableStoragePool, NSString;

@interface NUPurgeableStorageFactory : NSObject <NUStorageFactory> {

	Class _storageClass;
	NUPurgeableStoragePool* _storagePool;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newStorageWithSize:(SCD_Struct_NU5)arg1 format:(id)arg2 ;
-(void)returnStorage:(id)arg1 ;
-(id)initWithStorageClass:(Class)arg1 ;
-(id)initWithStoragePool:(id)arg1 ;
-(id)initWithStorageClass:(Class)arg1 storagePool:(id)arg2 ;
@end

