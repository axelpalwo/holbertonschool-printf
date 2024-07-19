![printf](https://github.com/user-attachments/assets/c63d9f06-8654-4151-8221-d62666f48220)# holbertonschool-printf

Holberton project to implement all the learnings in the past month in C language.
It brings out every concept we learned and it's important how we implement them.

# Printf project

The Printf function is made to print formatted text.
When this function is used, as main argument is passed a string with zero or more directives.
A directive is called with "%Character", it's the way the function recognizes the type of data passed as arguments
after the main string.
When a directive is passed in the string, the function will look for that type of data specified, if any was found,
it will not print anything. If the directive is not recognized, it will print the directive as text.

# Flowchart of Printf
![Uploading prin<mxfile host="app.diagrams.net" modified="2024-07-19T16:52:50.203Z" agent="Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/126.0.0.0 Safari/537.36" etag="BnB1iRCa8UjUf_iKleKV" version="24.6.5" type="google">
  <diagram id="C5RBs43oDa-KdzZeNtuy" name="Page-1">
    <mxGraphModel grid="1" page="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="WIyWlLk6GJQsqaUBKTNV-0" />
        <mxCell id="WIyWlLk6GJQsqaUBKTNV-1" parent="WIyWlLk6GJQsqaUBKTNV-0" />
        <mxCell id="WIyWlLk6GJQsqaUBKTNV-2" value="" style="rounded=0;html=1;jettySize=auto;orthogonalLoop=1;fontSize=11;endArrow=block;endFill=0;endSize=8;strokeWidth=1;shadow=0;labelBackgroundColor=none;edgeStyle=orthogonalEdgeStyle;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry relative="1" as="geometry">
            <mxPoint x="219.5" y="80" as="sourcePoint" />
            <mxPoint x="219.5" y="170" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="WIyWlLk6GJQsqaUBKTNV-3" value="&lt;font style=&quot;font-size: 18px;&quot;&gt;Entry point&lt;/font&gt;" style="rounded=1;whiteSpace=wrap;html=1;fontSize=12;glass=0;strokeWidth=1;shadow=0;fillColor=#DBFFFE;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="160" y="80" width="120" height="40" as="geometry" />
        </mxCell>
        <mxCell id="WIyWlLk6GJQsqaUBKTNV-8" value="True" style="rounded=0;html=1;jettySize=auto;orthogonalLoop=1;fontSize=11;endArrow=block;endFill=0;endSize=8;strokeWidth=1;shadow=0;labelBackgroundColor=none;edgeStyle=orthogonalEdgeStyle;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="0.0588" y="-19" relative="1" as="geometry">
            <mxPoint as="offset" />
            <mxPoint x="219.5" y="570" as="sourcePoint" />
            <mxPoint x="220" y="670" as="targetPoint" />
            <Array as="points">
              <mxPoint x="220" y="670" />
              <mxPoint x="220" y="670" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="WIyWlLk6GJQsqaUBKTNV-11" value="&lt;font style=&quot;font-size: 18px;&quot;&gt;Return Tbytes&lt;/font&gt;" style="rounded=1;whiteSpace=wrap;html=1;fontSize=12;glass=0;strokeWidth=1;shadow=0;fillColor=#DBFFFE;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="160" y="670" width="120" height="40" as="geometry" />
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-0" value="&lt;font style=&quot;font-size: 14px;&quot;&gt;tbytes -&amp;gt; Counter of Bytes&lt;br&gt;ptr -&amp;gt; Pointer to Format&lt;/font&gt;" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#CCFFCC;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="120" y="170" width="200" height="60" as="geometry" />
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-1" value="" style="rounded=0;html=1;jettySize=auto;orthogonalLoop=1;fontSize=11;endArrow=block;endFill=0;endSize=8;strokeWidth=1;shadow=0;labelBackgroundColor=none;edgeStyle=orthogonalEdgeStyle;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry relative="1" as="geometry">
            <mxPoint x="219.5" y="230" as="sourcePoint" />
            <mxPoint x="220" y="280" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-8" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" source="O3UatcxzKXsJh77SpwCC-2" target="O3UatcxzKXsJh77SpwCC-5">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-2" value="&lt;font style=&quot;font-size: 14px;&quot;&gt;iph -&amp;gt; Int placeholder&lt;br&gt;sph -&amp;gt; String placeholder&lt;br&gt;cph -&amp;gt; Char placeholder&lt;/font&gt;" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#CCFFCC;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="120" y="280" width="200" height="80" as="geometry" />
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-4" value="" style="rounded=0;html=1;jettySize=auto;orthogonalLoop=1;fontSize=11;endArrow=block;endFill=0;endSize=8;strokeWidth=1;shadow=0;labelBackgroundColor=none;edgeStyle=orthogonalEdgeStyle;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry relative="1" as="geometry">
            <mxPoint x="219.5" y="360" as="sourcePoint" />
            <mxPoint x="220" y="410" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-5" value="&lt;font style=&quot;font-size: 18px;&quot;&gt;*ptr != &#39;\0&#39;&lt;br&gt;ptr != NULL&lt;/font&gt;" style="rhombus;whiteSpace=wrap;html=1;fillColor=#99CCFF;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="140" y="410" width="160" height="160" as="geometry" />
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-9" value="" style="rounded=0;html=1;jettySize=auto;orthogonalLoop=1;fontSize=11;endArrow=block;endFill=0;endSize=8;strokeWidth=1;shadow=0;labelBackgroundColor=none;edgeStyle=orthogonalEdgeStyle;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" source="O3UatcxzKXsJh77SpwCC-5">
          <mxGeometry relative="1" as="geometry">
            <mxPoint x="400" y="490" as="sourcePoint" />
            <mxPoint x="380" y="490" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-10" value="False" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" connectable="0" vertex="1" parent="O3UatcxzKXsJh77SpwCC-9">
          <mxGeometry x="-0.2036" y="1" relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-12" value="&lt;font style=&quot;font-size: 18px;&quot;&gt;*ptr == &#39;%&#39;&lt;/font&gt;" style="rhombus;whiteSpace=wrap;html=1;fillColor=#99CCFF;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="380" y="420" width="156" height="140" as="geometry" />
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-13" value="" style="rounded=0;html=1;jettySize=auto;orthogonalLoop=1;fontSize=11;endArrow=block;endFill=0;endSize=8;strokeWidth=1;shadow=0;labelBackgroundColor=none;edgeStyle=orthogonalEdgeStyle;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" target="O3UatcxzKXsJh77SpwCC-15">
          <mxGeometry relative="1" as="geometry">
            <mxPoint x="457.5" y="560" as="sourcePoint" />
            <mxPoint x="340" y="600" as="targetPoint" />
            <Array as="points">
              <mxPoint x="458" y="640" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-14" value="False" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" connectable="0" vertex="1" parent="O3UatcxzKXsJh77SpwCC-13">
          <mxGeometry x="-0.329" y="-3" relative="1" as="geometry">
            <mxPoint x="3" y="8" as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-15" value="write(1, ptr, 1)&lt;br&gt;tbytes++" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#CCFFCC;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="290" y="610" width="120" height="60" as="geometry" />
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-16" value="" style="rounded=0;html=1;jettySize=auto;orthogonalLoop=1;fontSize=11;endArrow=block;endFill=0;endSize=8;strokeWidth=1;shadow=0;labelBackgroundColor=none;edgeStyle=orthogonalEdgeStyle;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" source="O3UatcxzKXsJh77SpwCC-12" target="O3UatcxzKXsJh77SpwCC-51">
          <mxGeometry relative="1" as="geometry">
            <mxPoint x="550" y="530" as="sourcePoint" />
            <mxPoint x="558" y="470" as="targetPoint" />
            <Array as="points">
              <mxPoint x="536" y="450" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-17" value="True" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" connectable="0" vertex="1" parent="O3UatcxzKXsJh77SpwCC-16">
          <mxGeometry x="-0.2036" y="1" relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-18" value="cph = va_arg(ap, int)&lt;br&gt;write(1, &amp;amp;cph, 1)&lt;div&gt;tbytes++&lt;/div&gt;" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#CCFFCC;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="354" y="700" width="120" height="60" as="geometry" />
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-19" value="&lt;font style=&quot;font-size: 14px;&quot;&gt;sph = va_arg(ap, char *)&lt;/font&gt;" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#CCFFCC;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="490" y="700" width="120" height="60" as="geometry" />
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-20" value="cph = &#39;%&#39;&lt;br&gt;write(1, &amp;amp;cph, 1)&lt;br&gt;tbytes++" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#CCFFCC;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="630" y="700" width="120" height="60" as="geometry" />
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-21" value="iph = va_arg(ap, int)&lt;br&gt;sph =int_to_str(iph)" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#CCFFCC;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="630" y="600" width="120" height="60" as="geometry" />
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-22" value="cph = &#39;%&#39;&lt;br&gt;write(1, &amp;amp;cph, 1)&lt;br&gt;tbytes++&lt;br&gt;ptr--" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#CCFFCC;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="630" y="510" width="120" height="60" as="geometry" />
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-23" value="" style="endArrow=classic;html=1;rounded=0;entryX=0;entryY=0.5;entryDx=0;entryDy=0;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" target="O3UatcxzKXsJh77SpwCC-22">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="536" y="610" as="sourcePoint" />
            <mxPoint x="586" y="560" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-34" value="Default" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" connectable="0" vertex="1" parent="O3UatcxzKXsJh77SpwCC-23">
          <mxGeometry x="-0.0204" y="-2" relative="1" as="geometry">
            <mxPoint y="-1" as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-26" value="" style="endArrow=classic;html=1;rounded=0;entryX=-0.017;entryY=0.633;entryDx=0;entryDy=0;entryPerimeter=0;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" target="O3UatcxzKXsJh77SpwCC-21">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="540" y="610" as="sourcePoint" />
            <mxPoint x="640" y="550" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-33" value="Case d, i" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" connectable="0" vertex="1" parent="O3UatcxzKXsJh77SpwCC-26">
          <mxGeometry x="-0.0202" relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-27" value="" style="endArrow=classic;html=1;rounded=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" target="O3UatcxzKXsJh77SpwCC-20">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="540" y="610" as="sourcePoint" />
            <mxPoint x="650" y="560" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-32" value="Case %" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" connectable="0" vertex="1" parent="O3UatcxzKXsJh77SpwCC-27">
          <mxGeometry x="0.0196" y="1" relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-28" value="" style="endArrow=classic;html=1;rounded=0;entryX=0.442;entryY=-0.033;entryDx=0;entryDy=0;entryPerimeter=0;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" target="O3UatcxzKXsJh77SpwCC-19">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="540" y="610" as="sourcePoint" />
            <mxPoint x="660" y="570" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-31" value="Case s" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" connectable="0" vertex="1" parent="O3UatcxzKXsJh77SpwCC-28">
          <mxGeometry x="0.0432" y="-3" relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-29" value="" style="endArrow=classic;html=1;rounded=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" target="O3UatcxzKXsJh77SpwCC-18">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="540" y="610" as="sourcePoint" />
            <mxPoint x="670" y="580" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-30" value="Case c" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" connectable="0" vertex="1" parent="O3UatcxzKXsJh77SpwCC-29">
          <mxGeometry x="0.0045" y="2" relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-37" value="" style="endArrow=classic;html=1;rounded=0;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" source="O3UatcxzKXsJh77SpwCC-19">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="530" y="670" as="sourcePoint" />
            <mxPoint x="550" y="800" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-38" value="" style="endArrow=classic;html=1;rounded=0;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" source="O3UatcxzKXsJh77SpwCC-21">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="560" y="770" as="sourcePoint" />
            <mxPoint x="550" y="800" as="targetPoint" />
            <Array as="points">
              <mxPoint x="780" y="630" />
              <mxPoint x="780" y="800" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-39" value="!sph" style="rhombus;whiteSpace=wrap;html=1;fillColor=#99CCFF;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="510" y="800" width="80" height="80" as="geometry" />
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-40" value="" style="endArrow=classic;html=1;rounded=0;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" source="O3UatcxzKXsJh77SpwCC-39">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="530" y="670" as="sourcePoint" />
            <mxPoint x="550" y="920" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-41" value="true" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" connectable="0" vertex="1" parent="O3UatcxzKXsJh77SpwCC-40">
          <mxGeometry y="-1" relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-42" value="sph = &quot;(null)&quot;" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#CCFFCC;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="510" y="920" width="80" height="40" as="geometry" />
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-43" value="" style="endArrow=classic;html=1;rounded=0;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" source="O3UatcxzKXsJh77SpwCC-39">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="530" y="670" as="sourcePoint" />
            <mxPoint x="630" y="840" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-44" value="write(1, sph, length(sph))&lt;br&gt;tbytes += length(sph)&lt;br&gt;free(sph)" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#CCFFCC;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="630" y="802.5" width="130" height="75" as="geometry" />
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-45" value="" style="endArrow=classic;html=1;rounded=0;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=1;entryDx=0;entryDy=0;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" source="O3UatcxzKXsJh77SpwCC-42" target="O3UatcxzKXsJh77SpwCC-44">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="530" y="670" as="sourcePoint" />
            <mxPoint x="580" y="620" as="targetPoint" />
            <Array as="points">
              <mxPoint x="695" y="940" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-46" value="" style="endArrow=classic;html=1;rounded=0;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" source="O3UatcxzKXsJh77SpwCC-18" target="O3UatcxzKXsJh77SpwCC-5">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="530" y="670" as="sourcePoint" />
            <mxPoint x="800" y="400" as="targetPoint" />
            <Array as="points">
              <mxPoint x="414" y="1000" />
              <mxPoint x="800" y="1000" />
              <mxPoint x="800" y="410" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-47" value="" style="endArrow=classic;html=1;rounded=0;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="349.5" y="670" as="sourcePoint" />
            <mxPoint x="420" y="1000" as="targetPoint" />
            <Array as="points">
              <mxPoint x="350" y="1000" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-48" value="" style="endArrow=classic;html=1;rounded=0;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" source="O3UatcxzKXsJh77SpwCC-44">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="530" y="670" as="sourcePoint" />
            <mxPoint x="800" y="820" as="targetPoint" />
            <Array as="points">
              <mxPoint x="800" y="840" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-49" value="" style="endArrow=classic;html=1;rounded=0;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" source="O3UatcxzKXsJh77SpwCC-20">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="530" y="670" as="sourcePoint" />
            <mxPoint x="800" y="730" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-50" value="" style="endArrow=classic;html=1;rounded=0;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" source="O3UatcxzKXsJh77SpwCC-22">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="530" y="670" as="sourcePoint" />
            <mxPoint x="800" y="510" as="targetPoint" />
            <Array as="points">
              <mxPoint x="800" y="540" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-51" value="*(ptr + 1) == &#39;\0&#39;" style="rhombus;whiteSpace=wrap;html=1;fillColor=#99CCFF;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="560" y="410" width="76" height="80" as="geometry" />
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-52" value="" style="endArrow=classic;html=1;rounded=0;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" source="O3UatcxzKXsJh77SpwCC-51">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="500" y="650" as="sourcePoint" />
            <mxPoint x="690" y="450" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-53" value="True" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" connectable="0" vertex="1" parent="O3UatcxzKXsJh77SpwCC-52">
          <mxGeometry x="-0.037" y="-1" relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-54" value="&lt;font style=&quot;font-size: 18px;&quot;&gt;Return -1&lt;/font&gt;" style="rounded=1;whiteSpace=wrap;html=1;fontSize=12;glass=0;strokeWidth=1;shadow=0;fillColor=#DBFFFE;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="690" y="430" width="90" height="40" as="geometry" />
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-55" value="" style="endArrow=classic;html=1;rounded=0;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" edge="1" parent="WIyWlLk6GJQsqaUBKTNV-1" source="O3UatcxzKXsJh77SpwCC-51">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="500" y="650" as="sourcePoint" />
            <mxPoint x="540" y="610" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="O3UatcxzKXsJh77SpwCC-56" value="False" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" connectable="0" vertex="1" parent="O3UatcxzKXsJh77SpwCC-55">
          <mxGeometry x="-0.1202" y="3" relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
tf.png…]()

# Step by step of our Printf

1- We declare variables:
	tbytes -> Will store the bytes printed as the function works
	ptr -> Pointer to the first space of memory of format
	iph, sph, cph -> Placeholders for Ints, Strings and Characters.

2- We start looking in format string while is not NULL

3- Any character found will be printed with Write Function, unless the character found is '%'.

4- If '%' is found, we'll check the next position of the string and see if the character in there
	matches our conversion specifiers(c, s, i, d and %).

5- Each situation it's different from each other, but it will try to print the character in the list of arguments
	OR will treat the argument and convert it to a string to be printed.

6- As we print, we count the bytes printed, and are being stored in tbytes, which we will return at the end of the function.

# Conversion Funct.c

We get to find two main functions used for our Printf

1- Length: A function that returns the length of a string

2- int to str: A function that returns a string of a given number

#Int to Str

1- We need to count the memory to be allocated for this string

2- Every number will be 1 byte, if it's negative, its a plus byte because we need to represent the minus sign '-'
	And every string needs to have the Null terminating byte '\0'.

3- Then we allocate memory and check if its succesfull or failure.

4- If the number given is 0, then we manually return the string.

5- If its negative, we put as first position the minus sign '-' and reduce counter as now represents the quantity of numbers

6- Now begins the difficult part.
	We will calculate the division to be made so a '400' can become a '4' and then converted to character.
	We do the maths, and convert the number into a character, then store it.
	After that we do module of number for divider so we can continue to the next number
	If the number is '452' first will be divided by 100, so we can get the '4'.
	Then will be 452 % 100 -> To get the 52 as next number
	As Counter reduces, the divider will be minor each time.

7- We ended with the conversion, strings end with a null terminating byte, so we assign it.

8- We return a pointer to the first space of memory of the string.
