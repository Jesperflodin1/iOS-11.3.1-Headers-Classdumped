//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebBookmarkCollection.h"

@interface WebBookmarkCollection (SafariExtras)
+ (void)test_overrideMainBookmarkCollection;
+ (id)bookmarkCollectionForPPTTest;
+ (void)_stopBookmarkCollectionOpenRetryTimer;
+ (void)_startBookmarkCollectionOpenRetryTimer;
+ (void)stopObservingDatabaseVacuumNotification;
+ (void)observeDatabaseVacuumNotification;
+ (id)mainBookmarkCollection;
- (void)_markDuplicateReadingListBookmarkUnread:(id)arg1 updatingController:(id)arg2;
- (void)receivedBookmarksDidChangeNotification:(id)arg1;
- (_Bool)updateReadingListBookmarkWithID:(int)arg1 setTitle:(id)arg2 address:(id)arg3 previewText:(id)arg4 thumbnailURL:(id)arg5 siteName:(id)arg6;
- (_Bool)markReadingListBookmark:(id)arg1 asRead:(_Bool)arg2 postNotification:(_Bool)arg3;
- (_Bool)saveReadingListBookmarkWithTitle:(id)arg1 address:(id)arg2 previewText:(id)arg3 thumbnailURL:(id)arg4 siteName:(id)arg5 tabDocument:(id)arg6 didFetchPage:(_Bool)arg7 updateController:(id)arg8 savedBookmarkID:(int *)arg9 shouldFetchMetadata:(_Bool)arg10;
- (void)_saveWebArchiveForTabDocument:(id)arg1 bookmark:(id)arg2;
- (_Bool)saveReadingListBookmarkWithTitle:(id)arg1 address:(id)arg2;
- (id)bookmarksInFavoritesList;
@end
