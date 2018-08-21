/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RMPRemoteManagementRequest.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSArray;

@interface RMPChangeRequest : RMPRemoteManagementRequest <CEMRegisteredTypeProtocol> {

	NSString* _syncToken;
	NSArray* _updateDeclarations;
	NSArray* _removeDeclarations;

}

@property (nonatomic,retain) NSString * syncToken;                      //@synthesize syncToken=_syncToken - In the implementation block
@property (nonatomic,retain) NSArray * updateDeclarations;              //@synthesize updateDeclarations=_updateDeclarations - In the implementation block
@property (nonatomic,retain) NSArray * removeDeclarations;              //@synthesize removeDeclarations=_removeDeclarations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)registeredClass;
+(id)registeredType;
+(id)RemoveDeclarationsItem_allowedKeys;
-(NSArray *)removeDeclarations;
-(void)setRemoveDeclarations:(NSArray *)arg1 ;
-(NSString *)syncToken;
-(void)setSyncToken:(NSString *)arg1 ;
-(id)serialize;
-(BOOL)loadRequestFromDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)validRemoveDeclarationsItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)serializeRemoveDeclarationsItem:(id)arg1 withAssetProviders:(id)arg2 ;
-(NSArray *)updateDeclarations;
-(void)setUpdateDeclarations:(NSArray *)arg1 ;
@end
