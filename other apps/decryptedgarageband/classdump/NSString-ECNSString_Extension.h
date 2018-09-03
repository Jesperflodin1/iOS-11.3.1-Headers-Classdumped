//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (ECNSString_Extension)
+ (id)toHexString:(id)arg1;
+ (id)stringWithFileSystemRepresentationWithPath:(id)arg1;
+ (id)uniqueFilenameForPath:(id)arg1;
+ (id)uniqueFilenameForName:(id)arg1 extension:(id)arg2 inDirectory:(id)arg3;
+ (id)uniqueNameForName:(id)arg1 checkBlock:(CDUnknownBlockType)arg2;
+ (id)uniqueNamesForName:(id)arg1 checkBlock:(CDUnknownBlockType)arg2 startValue:(long long)arg3 numberOfNames:(long long)arg4;
+ (id)localizedNumbersAndStringWithFormat:(id)arg1;
- (id)maStringByTrimmingTrailingWhitespaceAndNewlineCharacters;
- (id)maStringByTrimmingTrailingCharactersInSet:(id)arg1;
- (id)SHA256;
- (unsigned long long)sendNumberFromOSCPath;
- (unsigned long long)channelNumberFromOSCPath;
- (_Bool)containsPathComponent:(id)arg1 options:(unsigned long long)arg2;
- (id)ma_decomposedSubstringToIndex:(unsigned long long)arg1;
- (_Bool)containsPathComponent:(id)arg1;
- (_Bool)containsSubstring:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange)rangeOfCommonSuffixWithString:(id)arg1;
- (struct _NSRange)rangeOfCommonPrefixWithString:(id)arg1;
- (_Bool)containsSubstring:(id)arg1;
- (long long)numericCompare:(id)arg1;
- (_Bool)isPathComponentsVisible;
- (_Bool)isFileVisible;
- (_Bool)isDirectory;
- (id)pathByResolvingSymlinksAndAliasesInPath;
- (_Bool)containsLastPathComponents:(id)arg1;
- (id)stringByDeletingNumberOfLastPathComponents:(long long)arg1;
- (long long)lastPathComponentCompare:(id)arg1;
- (id)stringByReversingString_ma;
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)stringByConvertingToXML;
- (id)stringByDeletingCharactersInSet:(id)arg1;
- (id)_stringByDeletingCharactersInSet:(id)arg1;
- (id)stringByPrependingURLScheme;
- (_Bool)boolValue;
@end

