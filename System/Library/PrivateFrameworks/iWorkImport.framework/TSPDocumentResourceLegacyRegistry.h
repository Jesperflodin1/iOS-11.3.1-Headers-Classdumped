/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface TSPDocumentResourceLegacyRegistry : NSObject {

	NSDictionary* _metadataDictionary;

}

@property (readonly) NSDictionary * metadataDictionary; 
+(id)sharedSageRegistryMetadataURL;
+(id)sharedTangierRegistryMetadataURL;
+(id)sharedSageRegistry;
+(id)sharedTangierRegistry;
+(void)setSharedSageRegistryMetadataURL:(id)arg1 ;
+(void)setSharedTangierRegistryMetadataURL:(id)arg1 ;
-(id)documentResourceLegacyInfoForApplicationRelativePath:(id)arg1 ;
-(id)initWithMetadataURL:(id)arg1 ;
-(id)metadataDictionaryKeyForRelativePath:(id)arg1 ;
-(id)init;
-(id)initWithMetadataDictionary:(id)arg1 ;
-(NSDictionary *)metadataDictionary;
@end

