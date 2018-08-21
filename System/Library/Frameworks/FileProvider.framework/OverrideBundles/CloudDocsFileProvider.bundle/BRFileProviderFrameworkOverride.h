/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/FileProvider.framework/OverrideBundles/CloudDocsFileProvider.bundle/CloudDocsFileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FPFrameworkOverriding.h>

@class NSString;

@interface BRFileProviderFrameworkOverride : NSObject <FPFrameworkOverriding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bookmarkPrefix;
-(id)_URLForItem:(id)arg1 ;
-(id)_acceptableUTIsForFolderItem:(id)arg1 ;
-(BOOL)_doesUTI:(id)arg1 conformsToUTIs:(id)arg2 ;
-(long long)overridePriority;
-(BOOL)FPURLIsInFileProvider:(id)arg1 ;
-(void)FPBookmarkableStringFromDocumentURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)FPDocumentURLFromBookmarkableString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)FPFilterActions:(id)arg1 forDroppingItems:(id)arg2 underItem:(id)arg3 ;
-(BOOL)FPAreUTIsImportable:(id)arg1 toFolderItem:(id)arg2 ;
-(void)FPUniversalBookmarkableStringFromDocumentURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)FPDocumentURLFromUniversalBookmarkableString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
