/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CXCallSource.h>

@protocol NSCopying;
@class CXProviderExtensionHostContext, NSExtension;

@interface CXExtensionCallSource : CXCallSource {

	CXProviderExtensionHostContext* _extensionContext;
	NSExtension* _extension;
	id<NSCopying> _requestIdentifier;

}

@property (nonatomic,retain) NSExtension * extension;                                        //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying> requestIdentifier;                                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) CXProviderExtensionHostContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
-(id)init;
-(id)identifier;
-(CXProviderExtensionHostContext *)extensionContext;
-(id)bundle;
-(void)setRequestIdentifier:(id<NSCopying>)arg1 ;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(id)displayName;
-(int)processIdentifier;
-(id)initWithExtensionIdentifier:(id)arg1 ;
-(id<NSCopying>)requestIdentifier;
-(void)setExtensionContext:(CXProviderExtensionHostContext *)arg1 ;
-(id)vendorProtocolDelegate;
-(void)beginWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithExtension:(id)arg1 ;
@end

