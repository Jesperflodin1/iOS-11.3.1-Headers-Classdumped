/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BRNonLocalVersionReceiving <NSObject>
@required
-(oneway void)newThumbnailForVersionWithEtag:(id)arg1;
-(oneway void)newCachedVersionAtURL:(id)arg1 size:(id)arg2 etag:(id)arg3 hasThumbnail:(BOOL)arg4 displayName:(id)arg5 lastEditorDeviceName:(id)arg6 lastEditorNameComponents:(id)arg7 modificationDate:(id)arg8;
-(oneway void)newFaultVersionAtURL:(id)arg1 faultURL:(id)arg2 faultExtension:(id)arg3 etag:(id)arg4 hasThumbnail:(BOOL)arg5 displayName:(id)arg6 lastEditorDeviceName:(id)arg7 lastEditorNameComponents:(id)arg8 modificationDate:(id)arg9;
-(oneway void)versionsDone;

@end

