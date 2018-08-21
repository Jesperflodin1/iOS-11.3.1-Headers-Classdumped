/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, CKContainerOptions;

@interface NSCloudKitMirroringDelegateOptions : NSObject {

	NSString* _containerIdentifier;
	NSNumber* _ckAssetThresholdBytes;
	BOOL _useEncryptedStorage;
	BOOL _initializeSchema;
	NSNumber* _operationMemoryThresholdBytes;
	CKContainerOptions* _containerOptions;

}

@property (nonatomic,retain) NSString * containerIdentifier;                        //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * ckAssetThresholdBytes;                      //@synthesize ckAssetThresholdBytes=_ckAssetThresholdBytes - In the implementation block
@property (assign,nonatomic) BOOL initializeSchema;                                 //@synthesize initializeSchema=_initializeSchema - In the implementation block
@property (nonatomic,retain) CKContainerOptions * containerOptions;                 //@synthesize containerOptions=_containerOptions - In the implementation block
@property (assign,nonatomic) BOOL useEncryptedStorage;                              //@synthesize useEncryptedStorage=_useEncryptedStorage - In the implementation block
@property (nonatomic,retain) NSNumber * operationMemoryThresholdBytes;              //@synthesize operationMemoryThresholdBytes=_operationMemoryThresholdBytes - In the implementation block
-(BOOL)useEncryptedStorage;
-(NSNumber *)operationMemoryThresholdBytes;
-(NSNumber *)ckAssetThresholdBytes;
-(CKContainerOptions *)containerOptions;
-(BOOL)initializeSchema;
-(void)setInitializeSchema:(BOOL)arg1 ;
-(void)setUseEncryptedStorage:(BOOL)arg1 ;
-(void)setCkAssetThresholdBytes:(NSNumber *)arg1 ;
-(void)setOperationMemoryThresholdBytes:(NSNumber *)arg1 ;
-(void)setContainerOptions:(CKContainerOptions *)arg1 ;
-(id)copy;
-(void)dealloc;
-(id)description;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(NSString *)containerIdentifier;
@end

