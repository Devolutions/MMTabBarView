//
//  MMTabDragWindow.h
//  MMTabBarView
//
//  Created by Kent Sutherland on 6/1/06.
//  Copyright 2006 Kent Sutherland. All rights reserved.
//

#if __has_feature(modules)
@import Cocoa;
#else
#import <Cocoa/Cocoa.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class MMTabDragView;

@interface MMTabDragWindow : NSWindow
{
	@private
	MMTabDragView *_dragView;
}

+ (instancetype)dragWindowWithImage:(NSImage *)image styleMask:(NSUInteger)styleMask;

- (instancetype)initWithImage:(NSImage *)image styleMask:(NSUInteger)styleMask;

@property (readonly) MMTabDragView *dragView;

@end

NS_ASSUME_NONNULL_END
