/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAssembly.h>

@protocol NUExtensionContextProvider;
@class NSString;

@interface NUExtensionAssembly : NSObject <NFAssembly> {

	id<NUExtensionContextProvider> _extensionContextProvider;

}

@property (nonatomic,__weak,readonly) id<NUExtensionContextProvider> extensionContextProvider;              //@synthesize extensionContextProvider=_extensionContextProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadInRegistry:(id)arg1 ;
-(id<NUExtensionContextProvider>)extensionContextProvider;
-(id)initWithExtensionContextProvider:(id)arg1 ;
@end

