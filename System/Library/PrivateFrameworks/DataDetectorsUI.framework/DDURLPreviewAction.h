/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDPreviewAction.h>
#import <libobjc.A.dylib/SFSafariViewControllerDelegate.h>

@class NSString;

@interface DDURLPreviewAction : DDPreviewAction <SFSafariViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)handlesUrl:(id)arg1 result:(DDResultRef)arg2 ;
+(id)ddPreviewActionItemsForSimpleDDActions:(id)arg1 ;
+(id)validatedURLWithURL:(id)arg1 result:(DDResultRef)arg2 ;
+(id)previewActionsWithURL:(id)arg1 validatedURL:(id)arg2 result:(DDResultRef)arg3 context:(id)arg4 ;
+(id)ddPreviewActionItemsForWebURL:(id)arg1 ;
-(void)setPreviewMode:(BOOL)arg1 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(id)commitURL;
-(id)createViewController;
-(BOOL)requiresEmbeddingNavigationController;
@end

