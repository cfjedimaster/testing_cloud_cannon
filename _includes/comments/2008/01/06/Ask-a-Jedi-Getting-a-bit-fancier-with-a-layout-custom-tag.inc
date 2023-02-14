
<div class="comment" id="c_1713675908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675908">1</a> by Todd Rafferty
		posted on 1/6/2008 at 8:37 PM
		</div>
		<div class="comment_text"><p>I prefer the:<br>&amp;lt;cf_layout&amp;gt;<br>&amp;lt;cf_layoutparam attributes... /&amp;gt;<br>&amp;lt;cf_layout&amp;gt;</p><p>Then you can keep the layout shell as generic as possible on a page by page basis and if there's an additional parameters that need to be passed in (such as template), then you can pass it in via cf_layoutparam, but it's not required (meaning, layout.cfm has a default mode).  The &amp;lt;cfassociate&amp;gt; tag is awesome/fun to play around with.  A lot of power you can add to custom tags that way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675909">2</a> by Todd Rafferty
		posted on 1/6/2008 at 8:38 PM
		</div>
		<div class="comment_text"><p>&lt;cf_layout&gt;<br>&lt;cf_layoutparam attributes... /&gt;<br>&lt;/cf_layout&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675910">3</a> by Raymond Camden
		posted on 1/6/2008 at 9:23 PM
		</div>
		<div class="comment_text"><p>Hmm. I don't like that approach. Just because I want my layout code to have as little 'footprint' in the file as possible. By using cf_layout x=y, I only have 2 lines for layout in the template. Your method would increase that to 3.</p><p>Obviously, a VERY small, nitpicky difference of opinion. ;)</p><p>I _do_ think cfassociate is cool. Custom tags are under appreciated. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675911">4</a> by Todd Rafferty
		posted on 1/6/2008 at 9:37 PM
		</div>
		<div class="comment_text"><p>Ray, you're missing something.  By default, there's only _EVER_ 2 lines.  Layoutparam is optional.  It's either there or it isn't.  If it isn't used, then awesome.  2 lines.  If it is used, then great... I can pass additional stuff to the custom tag and it's further expandable without ever having to touch the call to &lt;cflayout&gt;.</p><p>In my Application.cfc, my call to &lt;cflayout&gt; is this:<br>&lt;cffunction name="onRequest"&gt;<br>&lt;cfargument name="whatever"&gt;<br>&lt;cf_layout&gt;&lt;cfinclude template="#arguments.whatever#"&gt;&lt;/cf_layout&gt;<br>&lt;/cffunction&gt;</p><p>Done.  Never ever have to touch that code again.  On my init pages for my applications, if I need something that cf_layout needs to be aware of, then I use cf_layoutparam  to pass in those attributes and I'm done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675912">5</a> by Todd Rafferty
		posted on 1/6/2008 at 9:39 PM
		</div>
		<div class="comment_text"><p>I might also add that I have a disableShell="true" attributes that I pass in via cf_layoutparam and the cf_layout custom tag is responsible for knowing what to do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675913">6</a> by Raymond Camden
		posted on 1/6/2008 at 10:02 PM
		</div>
		<div class="comment_text"><p>No, I did get that. My thinking was that for the cases where you do need to use the optional arg, I preferred it "in tag" as opposed to a child tag. As I said - it was _just_ my personal pref.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675914">7</a> by John Farrar
		posted on 1/7/2008 at 2:40 AM
		</div>
		<div class="comment_text"><p>I like using tags for presentation also. HTML isn't an object and though it can be generated with CFCs it seems more natural to generate HTML with Tags than CFCs. An integration of Controller and Modeling built in CFCs with presentation generated by tags is how we built COOP. When we do a return request via AJAX or interact via Flex/AIR applications we don't use the custom tags at all.</p><p>We call the concept you are refer to here skinning. It's a little more than what the article mentioned and would be pretty hard to cover in a single blog post. I think for simplistic solutions this is about as good as you can get Ray. If your going to take it to another level then it should be a whole framework rather than more of add a piece here and there. This is an excellent article.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675915">8</a> by Joshua Curtiss
		posted on 1/8/2008 at 3:45 AM
		</div>
		<div class="comment_text"><p>Yeah, very nice and clean. Good idea.</p></div>
	</div>
</div>
		