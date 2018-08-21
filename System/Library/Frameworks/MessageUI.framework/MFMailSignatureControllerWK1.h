/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFMailSignatureController.h>
#import <libobjc.A.dylib/DOMEventListener.h>

@class NSString;

@interface MFMailSignatureControllerWK1 : MFMailSignatureController <DOMEventListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleEvent:(id)arg1 ;
-(void)addSignatureForSender:(id)arg1 bodyField:(id)arg2 prepend:(BOOL)arg3 ;
-(void)updateSignatureForSender:(id)arg1 bodyField:(id)arg2 ;
-(void)finalizeSignatureForBodyField:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)invalidateBodyField:(id)arg1 ;
-(void)removeSignatureForSender:(id)arg1 bodyField:(id)arg2 ;
-(id)_locateSignatureDiv:(id)arg1 ;
-(id)_domDocumentForComposeBodyField:(id)arg1 ;
-(id)_createSignatureForSender:(id)arg1 document:(id)arg2 prepend:(BOOL)arg3 node:(id)arg4 ;
-(id)_createSignatureElement:(id)arg1 prepend:(BOOL)arg2 node:(id)arg3 signature:(id)arg4 ;
-(BOOL)_isDraftRestore:(id)arg1 ;
-(BOOL)_updateToSignature:(id)arg1 forDocument:(id)arg2 ;
-(id)_prependSignatureForSender:(id)arg1 document:(id)arg2 node:(id)arg3 ;
-(id)_signatureMarkupStringForSender:(id)arg1 ;
@end

