//
//  MMTabDragWindow.h
//  MMTabBarView
//
//  Created by Kent Sutherland on 6/1/06.
//  Copyright 2006 Kent Sutherland. All rights reserved.
//

#import <Cocoa/Cocoa.h>

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
